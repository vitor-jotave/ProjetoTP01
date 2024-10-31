#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

class Conta {
private:
    Codigo codigo;
    Senha senha;

public:
    Conta(Codigo  codigo, Senha  senha);
    [[nodiscard]] Codigo getCodigo() const;
    [[nodiscard]] Senha getSenha() const;
};

class Viagem {
private:
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;

public:
    Viagem(Codigo  codigo, Nome  nome, const Avaliacao& avaliacao);
    [[nodiscard]] Codigo getCodigo() const;
    [[nodiscard]] Nome getNome() const;
    [[nodiscard]] Avaliacao getAvaliacao() const;
};

class Atividade {
private:
    Codigo codigo;
    Nome nome;
    Data data;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao avaliacao;

public:
    Atividade(Codigo  codigo, Nome  nome, Data  data, Horario  horario, const Duracao& duracao, const Dinheiro& preco, const Avaliacao& avaliacao);
    [[nodiscard]] Codigo getCodigo() const;
    [[nodiscard]] Nome getNome() const;
    [[nodiscard]] Data getData() const;
    [[nodiscard]] Horario getHorario() const;
    [[nodiscard]] Duracao getDuracao() const;
    [[nodiscard]] Dinheiro getPreco() const;
    [[nodiscard]] Avaliacao getAvaliacao() const;
};

class Destino {
private:
    Codigo codigo;
    Nome nome;
    Data dataInicio;
    Data dataTermino;
    Avaliacao avaliacao;

public:
    Destino(Codigo  codigo, Nome  nome, const Data& dataInicio, const Data& dataTermino, const Avaliacao& avaliacao);
    [[nodiscard]] Codigo getCodigo() const;
    [[nodiscard]] Nome getNome() const;
    [[nodiscard]] Data getDataInicio() const;
    [[nodiscard]] Data getDataTermino() const;
    [[nodiscard]] Avaliacao getAvaliacao() const;
};

class Hospedagem {
private:
    Codigo codigo;
    Nome nome;
    Dinheiro diaria;
    Avaliacao avaliacao;

public:
    Hospedagem(Codigo  codigo, Nome  nome, const Dinheiro& diaria, const Avaliacao& avaliacao);
    [[nodiscard]] Codigo getCodigo() const;
    [[nodiscard]] Nome getNome() const;
    [[nodiscard]] Dinheiro getDiaria() const;
    [[nodiscard]] Avaliacao getAvaliacao() const;
};

#endif //ENTIDADES_H
