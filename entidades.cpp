#include "entidades.h"

#include <utility>

// Implementação da classe Conta
Conta::Conta(Codigo codigo, Senha senha) : codigo(std::move(codigo)), senha(std::move(senha)) {}

Codigo Conta::getCodigo() const {
    return codigo;
}

Senha Conta::getSenha() const {
    return senha;
}

// Implementação da classe Viagem
Viagem::Viagem(Codigo codigo, Nome nome, const Avaliacao& avaliacao)
    : codigo(std::move(codigo)), nome(std::move(nome)), avaliacao(avaliacao) {}

Codigo Viagem::getCodigo() const {
    return codigo;
}

Nome Viagem::getNome() const {
    return nome;
}

Avaliacao Viagem::getAvaliacao() const {
    return avaliacao;
}

// Implementação da classe Atividade
Atividade::Atividade(Codigo codigo, Nome nome, Data data, Horario horario,
                     const Duracao& duracao, const Dinheiro& preco, const Avaliacao& avaliacao)
    : codigo(std::move(codigo)), nome(std::move(nome)), data(std::move(data)), horario(std::move(horario)), duracao(duracao), preco(preco), avaliacao(avaliacao) {}

Codigo Atividade::getCodigo() const {
    return codigo;
}

Nome Atividade::getNome() const {
    return nome;
}

Data Atividade::getData() const {
    return data;
}

Horario Atividade::getHorario() const {
    return horario;
}

Duracao Atividade::getDuracao() const {
    return duracao;
}

Dinheiro Atividade::getPreco() const {
    return preco;
}

Avaliacao Atividade::getAvaliacao() const {
    return avaliacao;
}

// Implementação da classe Destino
Destino::Destino(Codigo codigo, Nome nome, const Data& dataInicio, const Data& dataTermino,
                 const Avaliacao& avaliacao)
    : codigo(std::move(codigo)), nome(std::move(nome)), dataInicio(dataInicio), dataTermino(dataTermino), avaliacao(avaliacao) {
    if (dataTermino.getValor() <= dataInicio.getValor()) {
        throw std::invalid_argument("Data de término deve ser posterior à data de início.");
    };
}

Codigo Destino::getCodigo() const {
    return codigo;
}

Nome Destino::getNome() const {
    return nome;
}

Data Destino::getDataInicio() const {
    return dataInicio;
}

Data Destino::getDataTermino() const {
    return dataTermino;
}

Avaliacao Destino::getAvaliacao() const {
    return avaliacao;
}

// Implementação da classe Hospedagem
Hospedagem::Hospedagem(Codigo codigo, Nome nome, const Dinheiro& diaria, const Avaliacao& avaliacao)
    : codigo(std::move(codigo)), nome(std::move(nome)), diaria(diaria), avaliacao(avaliacao) {}

Codigo Hospedagem::getCodigo() const {
    return codigo;
}

Nome Hospedagem::getNome() const {
    return nome;
}

Dinheiro Hospedagem::getDiaria() const {
    return diaria;
}

Avaliacao Hospedagem::getAvaliacao() const {
    return avaliacao;
}