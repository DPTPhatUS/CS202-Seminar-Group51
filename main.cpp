#include <iostream>
#include <memory>
#include <string>

// Strategy Interface
class PaymentStrategy 
{
public:
    virtual ~PaymentStrategy() = default;
    virtual void processPayment(double amount) const = 0;
};

// Concrete Strategy for Credit Card Payment
class CreditCardPayment : public PaymentStrategy 
{
public:
    void processPayment(double amount) const override 
    {
        std::cout << "Processing credit card payment of $" << amount << "\n";
    }
};

// Concrete Strategy for Digital Wallet Payment
class DigitalWalletPayment : public PaymentStrategy 
{
public:
    void processPayment(double amount) const override 
    {
        std::cout << "Processing digital wallet payment of $" << amount << "\n";
    }
};

// Concrete Strategy for Bank Transfer Payment
class BankTransferPayment : public PaymentStrategy 
{
public:
    void processPayment(double amount) const override 
    {
        std::cout << "Processing bank transfer payment of $" << amount << "\n";
    }
};

// Context Class
class PaymentProcessor 
{
public:
    void setPaymentStrategy(std::unique_ptr<PaymentStrategy> strategy) 
    {
        paymentStrategy = std::move(strategy);
    }
    
    void executePayment(double amount) const 
    {
        if (paymentStrategy) 
            paymentStrategy->processPayment(amount);
        else 
            std::cout << "No payment strategy set!\n";
    }

private:
    std::unique_ptr<PaymentStrategy> paymentStrategy;
};

int main() {
    PaymentProcessor processor;

    processor.setPaymentStrategy(std::make_unique<CreditCardPayment>());
    processor.executePayment(150.00); // Output: Processing credit card payment of $150.00

    processor.setPaymentStrategy(std::make_unique<DigitalWalletPayment>());
    processor.executePayment(200.00); // Output: Processing digital wallet payment of $200.00

    processor.setPaymentStrategy(std::make_unique<BankTransferPayment>());
    processor.executePayment(300.00); // Output: Processing bank transfer payment of $300.00
}