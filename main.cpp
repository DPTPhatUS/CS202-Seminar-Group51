<<<<<<< HEAD
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
=======
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>
#include <chrono>

class Image {
public:
    virtual void display() = 0;
    virtual ~Image() {}
};

class RealImage : public Image {
private:
    std::string filename;
    cv::Mat image;
    bool loaded;

public:
    RealImage(const std::string& filename) : filename(filename), loaded(false) {}

    void display() override {
        if (!loaded) {
            image = cv::imread(filename, cv::IMREAD_COLOR);
            if (image.empty()) {
                std::cerr << "Error loading image: " << filename << std::endl;
            }
            std::cout << "RealImage: Loading image " << filename << std::endl;
            loaded = true;
        }
        cv::imshow("RealImage", image);
        cv::waitKey(0);
    }
};

class ImageProxy : public Image {
private:
    RealImage* realImage;
    std::string filename;

public:
    ImageProxy(const std::string& filename) : realImage(nullptr), filename(filename) {}

    void display() override {
        if (realImage == nullptr) {
            realImage = new RealImage(filename);
        }
        realImage->display();
    }

    ~ImageProxy() {
        delete realImage;
    }
};

int main() {
    int displayTimes;
    std::cout << "Enter 1 or 2 to display the image 1 or 2 times: ";
    std::cin >> displayTimes;

    Image* image = new ImageProxy("/Users/quannguyennam/Documents/Projects/test/CS202/tiger.png");

    auto start = std::chrono::high_resolution_clock::now();
    image->display();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Time to load and display image first time: " << duration.count() << " ms" << std::endl;

    if (displayTimes == 2) {
        std::cout << "Displaying again..." << std::endl;

        start = std::chrono::high_resolution_clock::now();
        image->display();
        end = std::chrono::high_resolution_clock::now();
        duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
        std::cout << "Time to display image second time: " << duration.count() << " ms" << std::endl;
    }

    delete image;
    return 0;
}
>>>>>>> a814076 (Proxy Design Patterns)
