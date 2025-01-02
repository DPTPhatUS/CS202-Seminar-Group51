#include <iostream>

class PaymentProcessor 
{
public:
    // Define an enum for payment types
    enum class PaymentType 
    {
        CreditCard,
        DigitalWallet,
        BankTransfer,
        Invalid // Default value for unsupported types
    };

    void setPaymentType(PaymentType type) 
    {
        paymentType = type;
    }

    void processPayment(double amount) const 
    {
        switch (paymentType) 
        {
        case PaymentType::CreditCard:
            std::cout << "Processing credit card payment of $" << amount << "\n";
            // Logic for processing credit card payment
            break;

        case PaymentType::DigitalWallet:
            std::cout << "Processing digital wallet payment of $" << amount << "\n";
            // Logic for processing digital wallet payment
            break;

        case PaymentType::BankTransfer:
            std::cout << "Processing bank transfer payment of $" << amount << "\n";
            // Logic for processing bank transfer payment
            break;

        case PaymentType::Invalid:
        default:
            std::cout << "Invalid payment type!\n";
            break;
        }
    }

private:
    PaymentType paymentType = PaymentType::Invalid; // Default to Invalid
};

int main() {
    PaymentProcessor processor;

    processor.setPaymentType(PaymentProcessor::PaymentType::CreditCard);
    processor.processPayment(150.00); // Output: Processing credit card payment of $150.00

    processor.setPaymentType(PaymentProcessor::PaymentType::DigitalWallet);
    processor.processPayment(200.00); // Output: Processing digital wallet payment of $200.00

    processor.setPaymentType(PaymentProcessor::PaymentType::BankTransfer);
    processor.processPayment(300.00); // Output: Processing bank transfer payment of $300.00

    processor.setPaymentType(PaymentProcessor::PaymentType::Invalid);
    processor.processPayment(400.00); // Output: Invalid payment type!
}