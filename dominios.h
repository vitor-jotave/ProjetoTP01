#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <stdexcept>

class Avaliacao {
private:
    int valor;
    static void validar(int valor);
public:
    explicit Avaliacao(int valor);
    [[nodiscard]] int getValor() const;
};

class Codigo {
private:
    std::string valor;
    static void validar(const std::string& valor);
public:
    explicit Codigo(const std::string& valor);
    [[nodiscard]] std::string getValor() const;
};

class Data {
private:
    std::string valor;
    static void validar(const std::string& valor);
public:
    explicit Data(const std::string& valor);
    [[nodiscard]] std::string getValor() const;
};

class Dinheiro {
private:
    double valor;
    static void validar(double valor);
public:
    Dinheiro(double valor);
    [[nodiscard]] double getValor() const;
};

class Duracao {
private:
    int valor;
    static void validar(int valor);
public:
    explicit Duracao(int valor);
    [[nodiscard]] int getValor() const;
};

class Horario {
private:
    std::string valor;
    static void validar(const std::string& valor);
public:
    explicit Horario(const std::string& valor);
    [[nodiscard]] std::string getValor() const;
};

class Nome {
private:
    std::string valor;
    static void validar(const std::string& valor);
public:
    explicit Nome(const std::string& valor);
    [[nodiscard]] std::string getValor() const;
};

class Senha {
private:
    std::string valor;
    static void validar(const std::string& valor);
public:
    explicit Senha(const std::string& valor);
    [[nodiscard]] std::string getValor() const;
};

#endif //DOMINIOS_H