#include "dominios.h"

#include <stdexcept>
#include <regex>

Avaliacao::Avaliacao(int valor) {
    validar(valor);
    this->valor = valor;
}

void Avaliacao::validar(int valor) {
    if (valor < 0 || valor > 5) {
        throw std::invalid_argument("Avaliacao invalida");
    }
}

int Avaliacao::getValor() const {
    return valor;
}

Codigo::Codigo(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

void Codigo::validar(const std::string& valor) {
    std::regex pattern("[A-Za-z0-9]{6}$");
    if (!std::regex_match(valor, pattern)) {
        throw std::invalid_argument("Codigo invalido");
    }
}

std::string Codigo::getValor() const {
    return valor;
}

Data::Data(const std::string &valor) {
    validar(valor);
    this->valor = valor;
}

void Data::validar(const std::string &valor) {
    std::regex pattern(R"(^\d{2}-\d{2}-\d{2}$)");
    if (!std::regex_match(valor, pattern)) {
        throw std::invalid_argument("Data invalida");
    }
    int dia = std::stoi(valor.substr(0,2));
    int mes = std::stoi(valor.substr(3,2));
    int ano = std::stoi(valor.substr(6,2));

    //Validação do mes
    if (mes < 1 || mes > 12) {
        throw std::invalid_argument("Data invalida");
    }

    // Validação do dia com consideraçnao para anos bissextos
    bool anoBissexto = (ano % 4 == 0) && (ano != 0);
    int diasNoMes[] = {31 , (anoBissexto ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (dia < 1 || dia > diasNoMes[mes - 1]) {
        throw std::invalid_argument("Dia inválido para o mês e ano fornecidos.");
    }
}

std::string Data::getValor() const {
    return valor;
}

Dinheiro::Dinheiro(double valor) {
    validar(valor);
    this->valor = valor;
}

void Dinheiro::validar(double valor) {
    if (valor < 0.0 || valor > 200000.0) {
        throw std::invalid_argument("Dinheiro deve ser um valor entre 0,00 e 200.000,00.");
    }
}

double Dinheiro::getValor() const {
    return valor;
}

// Implementação da classe Duracao
Duracao::Duracao(int valor) {
    validar(valor);
    this->valor = valor;
}

void Duracao::validar(int valor) {
    if (valor < 0 || valor > 360) {
        throw std::invalid_argument("Duração deve ser um valor entre 0 e 360.");
    }
}

int Duracao::getValor() const {
    return valor;
}

// Implementação da classe Horario
Horario::Horario(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

void Horario::validar(const std::string& valor) {
    std::regex pattern("^\\d{2}:\\d{2}$");
    if (!std::regex_match(valor, pattern)) {
        throw std::invalid_argument("Horário deve estar no formato HH:MM.");
    }
    int horas = std::stoi(valor.substr(0, 2));
    int minutos = std::stoi(valor.substr(3, 2));
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        throw std::invalid_argument("Horário inválido.");
    }
}

std::string Horario::getValor() const {
    return valor;
}

// Implementação da classe Nome
Nome::Nome(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

void Nome::validar(const std::string& valor) {
    if (valor.empty() || valor.length() > 30) {
        throw std::invalid_argument("Nome deve ter no máximo 30 caracteres.");
    }
}

std::string Nome::getValor() const {
    return valor;
}

// Implementação da classe Senha
Senha::Senha(const std::string& valor) {
    validar(valor);
    this->valor = valor;
}

void Senha::validar(const std::string& valor) {
    if (valor.length() != 5 || !std::regex_match(valor, std::regex("^[0-9]{5}$"))) {
        throw std::invalid_argument("Senha deve ter exatamente 5 dígitos numéricos.");
    }

    // Verifica se há dígitos duplicados
    for (size_t i = 0; i < valor.size(); ++i) {
        if (valor.find(valor[i]) != i) {
            throw std::invalid_argument("Senha não pode ter dígitos duplicados.");
        }
    }

    // Verifica se os dígitos estão em ordem crescente ou decrescente
    bool crescente = true;
    bool decrescente = true;
    for (size_t i = 0; i < valor.size() - 1; ++i) {
        if (valor[i] >= valor[i + 1]) crescente = false;
        if (valor[i] <= valor[i + 1]) decrescente = false;
    }
    if (crescente || decrescente) {
        throw std::invalid_argument("Senha não pode estar em ordem crescente ou decrescente.");
    }
}

std::string Senha::getValor() const {
    return valor;
}



