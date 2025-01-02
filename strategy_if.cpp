#include <iostream>
#include <string>

class PaymentProcessor 
{
public:
    void setPaymentType(const std::string& type) 
    {
        paymentType = type;
    }

    void processPayment(double amount) const 
    {
        if (paymentType == "CreditCard") {
            std::cout << "Processing credit card payment of $" << amount << "\n";
            // Logic for processing credit card payment
        } 
        else if (paymentType == "DigitalWallet") {
            std::cout << "Processing digital wallet payment of $" << amount << "\n";
            // Logic for processing digital wallet payment
        } 
        else if (paymentType == "BankTransfer") {
            std::cout << "Processing bank transfer payment of $" << amount << "\n";
            // Logic for processing bank transfer payment
        } 
        else {
            std::cout << "Invalid payment type: " << paymentType << "\n";
        }
    }

private:
    std::string paymentType;
};

int main() {
    PaymentProcessor processor;

    processor.setPaymentType("CreditCard");
    processor.processPayment(150.00); 
    // Output: Processing credit card payment of $150.00

    processor.setPaymentType("DigitalWallet");
    processor.processPayment(200.00); 
    // Output: Processing digital wallet payment of $200.00

    processor.setPaymentType("BankTransfer");
    processor.processPayment(300.00); 
    // Output: Processing bank transfer payment of $300.00
}