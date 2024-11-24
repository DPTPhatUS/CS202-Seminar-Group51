# CS202-Seminar-Group51

# Design Patterns in Action: Strategy, Proxy, and Decorator

This project demonstrates the implementation of three fundamental design patterns in software development: **Strategy**, **Proxy**, and **Decorator**. Each pattern is implemented in a separate module, showcasing its unique structure, usage, and advantages.

## Table of Contents
- [Introduction](#introduction)
- [Design Patterns](#design-patterns)
  - [Strategy Pattern](#strategy-pattern)
  - [Proxy Pattern](#proxy-pattern)
  - [Decorator Pattern](#decorator-pattern)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Design patterns are proven solutions to common software design problems. Understanding and implementing these patterns can lead to more flexible, reusable, and maintainable code. This project serves as a practical reference for using the Strategy, Proxy, and Decorator patterns in real-world applications.

## Design Patterns

### Strategy Pattern

The Strategy Pattern allows selecting an algorithm's behavior at runtime. It defines a family of algorithms, encapsulates each one, and makes them interchangeable. The Strategy Pattern enables clients to use different algorithms without modifying the context in which they are used.

#### Example Implementation
- The example demonstrates a payment processing system where different payment methods (e.g., credit card, PayPal) can be used interchangeably.

### Proxy Pattern

The Proxy Pattern provides a surrogate or placeholder for another object to control access to it. This pattern is often used to add a layer of control (like lazy loading, logging, or access control) when interacting with the real object.

#### Example Implementation
- The example showcases a virtual proxy for an image loader that loads large images only when necessary, improving performance and resource management.

### Decorator Pattern

The Decorator Pattern allows behavior to be added to individual objects dynamically without affecting the behavior of other objects from the same class. This pattern is useful for extending functionalities in a flexible and reusable way.

#### Example Implementation
- The example demonstrates how to add various toppings to a coffee order dynamically, showcasing how decorators can enhance or modify behavior at runtime.

## Installation

To run this project locally, clone the repository:

```bash
git clone https://github.com/DPTPhatUS/CS202-Seminar-Group51.git
