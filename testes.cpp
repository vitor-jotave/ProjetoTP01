#include "testes.h"
#include "dominios.h"
#include "entidades.h"

#include <cassert>
#include <iostream>

// Implementação dos testes de domínio

void TesteAvaliacao::testarAvaliacaoValida() {
    Avaliacao avaliacao1(3);
    Avaliacao avaliacao2(0);
    Avaliacao avaliacao3(5);
    assert(avaliacao1.getValor() == 3);
    assert(avaliacao2.getValor() == 0);
    assert(avaliacao3.getValor() == 5);
    std::cout << "Teste de avaliação válida passou.\n";
}

void TesteAvaliacao::testarAvaliacaoInvalida() {
    try {
        Avaliacao avaliacao1(-1);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Avaliacao avaliacao2(6);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Avaliacao avaliacao3(10);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de avaliação inválida passou.\n";
}

void TesteCodigo::testarCodigoValido() {
    Codigo codigo1("ABC123");
    Codigo codigo2("DEF456");
    Codigo codigo3("GHI789");
    assert(codigo1.getValor() == "ABC123");
    assert(codigo2.getValor() == "DEF456");
    assert(codigo3.getValor() == "GHI789");
    std::cout << "Teste de código válido passou.\n";
}

void TesteCodigo::testarCodigoInvalido() {
    try {
        Codigo codigo1("AB12");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo2("ABCDE!");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo3("12345@");
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de código inválido passou.\n";
}

void TesteData::testarDataValida() {
    Data data1("01-01-22");
    Data data2("29-02-24"); // Ano bissexto
    Data data3("31-12-99");
    assert(data1.getValor() == "01-01-22");
    assert(data2.getValor() == "29-02-24");
    assert(data3.getValor() == "31-12-99");
    std::cout << "Teste de data válida passou.\n";
}

void TesteData::testarDataInvalida() {
    try {
        Data data1("32-01-22");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Data data2("29-02-23"); // Não é ano bissexto
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Data data3("15-13-22");
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de data inválida passou.\n";
}

void TesteDinheiro::testarDinheiroValido() {
    Dinheiro dinheiro1(1000.00);
    Dinheiro dinheiro2(0.00);
    Dinheiro dinheiro3(200000.00);
    assert(dinheiro1.getValor() == 1000.00);
    assert(dinheiro2.getValor() == 0.00);
    assert(dinheiro3.getValor() == 200000.00);
    std::cout << "Teste de dinheiro válido passou.\n";
}

void TesteDinheiro::testarDinheiroInvalido() {
    try {
        Dinheiro dinheiro1(-10.00);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Dinheiro dinheiro2(250000.00);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Dinheiro dinheiro3(200000.01);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de dinheiro inválido passou.\n";
}

void TesteDuracao::testarDuracaoValida() {
    Duracao duracao1(0);
    Duracao duracao2(180);
    Duracao duracao3(360);
    assert(duracao1.getValor() == 0);
    assert(duracao2.getValor() == 180);
    assert(duracao3.getValor() == 360);
    std::cout << "Teste de duração válida passou.\n";
}

void TesteDuracao::testarDuracaoInvalida() {
    try {
        Duracao duracao1(-1);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Duracao duracao2(500);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Duracao duracao3(361);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de duração inválida passou.\n";
}

void TesteHorario::testarHorarioValido() {
    Horario horario1("00:00");
    Horario horario2("12:30");
    Horario horario3("23:59");
    assert(horario1.getValor() == "00:00");
    assert(horario2.getValor() == "12:30");
    assert(horario3.getValor() == "23:59");
    std::cout << "Teste de horário válido passou.\n";
}

void TesteHorario::testarHorarioInvalido() {
    try {
        Horario horario1("24:00");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Horario horario2("12:60");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Horario horario3("99:99");
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de horário inválido passou.\n";
}

void TesteNome::testarNomeValido() {
    Nome nome1("Joao");
    Nome nome2("Maria Silva");
    Nome nome3("Nome até trinta caracteres.");
    assert(nome1.getValor() == "Joao");
    assert(nome2.getValor() == "Maria Silva");
    assert(nome3.getValor() == "Nome até trinta caracteres.");
    std::cout << "Teste de nome válido passou.\n";
}

void TesteNome::testarNomeInvalido() {
    try {
        Nome nome1("");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Nome nome2("Nome que ultrapassa o limite de trinta caracteres");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Nome nome3("Um nome muito muito muito muito longo");
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de nome inválido passou.\n";
}

void TesteSenha::testarSenhaValida() {
    Senha senha1("13597");
    Senha senha2("90876");
    Senha senha3("24680");
    assert(senha1.getValor() == "13597");
    assert(senha2.getValor() == "90876");
    assert(senha3.getValor() == "24680");
    std::cout << "Teste de senha válida passou.\n";
}

void TesteSenha::testarSenhaInvalida() {
    try {
        Senha senha1("12345");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Senha senha2("54321");
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Senha senha3("11111");
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de senha inválida passou.\n";
}

// testes de entidade

void TesteConta::testarContaValida() {
    Codigo codigo("ABC123");
    Senha senha("13597");
    Conta conta(codigo, senha);
    assert(conta.getCodigo().getValor() == "ABC123");
    assert(conta.getSenha().getValor() == "13597");
    std::cout << "Teste de conta válida passou.\n";
}

void TesteConta::testarContaInvalida() {
    try {
        Codigo codigo("123"); // Código inválido
        Senha senha("13579");
        Conta conta(codigo, senha);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("ABC123");
        Senha senha("12345"); // Senha inválida
        Conta conta(codigo, senha);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("AB!C12"); // Código inválido
        Senha senha("13579");
        Conta conta(codigo, senha);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de conta inválida passou.\n";
}

void TesteViagem::testarViagemValida() {
    Codigo codigo("DEF456");
    Nome nome("Viagem Legal");
    Avaliacao avaliacao(4);
    Viagem viagem(codigo, nome, avaliacao);
    assert(viagem.getCodigo().getValor() == "DEF456");
    assert(viagem.getNome().getValor() == "Viagem Legal");
    assert(viagem.getAvaliacao().getValor() == 4);
    std::cout << "Teste de viagem válida passou.\n";
}

void TesteViagem::testarViagemInvalida() {
    try {
        Codigo codigo("12"); // Código inválido
        Nome nome("Viagem Legal");
        Avaliacao avaliacao(4);
        Viagem viagem(codigo, nome, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("DEF456");
        Nome nome("Nome muito muito muito longo que ultrapassa 30 caracteres"); // Nome inválido
        Avaliacao avaliacao(4);
        Viagem viagem(codigo, nome, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("DEF456");
        Nome nome("Viagem Legal");
        Avaliacao avaliacao(10); // Avaliação inválida
        Viagem viagem(codigo, nome, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de viagem inválida passou.\n";
}

void TesteAtividade::testarAtividadeValida() {
    Codigo codigo("GHI789");
    Nome nome("Atividade Interessante");
    Data data("01-01-22");
    Horario horario("14:00");
    Duracao duracao(120);
    Dinheiro preco(100.00);
    Avaliacao avaliacao(5);
    Atividade atividade(codigo, nome, data, horario, duracao, preco, avaliacao);
    assert(atividade.getCodigo().getValor() == "GHI789");
    assert(atividade.getNome().getValor() == "Atividade Interessante");
    assert(atividade.getData().getValor() == "01-01-22");
    assert(atividade.getHorario().getValor() == "14:00");
    assert(atividade.getDuracao().getValor() == 120);
    assert(atividade.getPreco().getValor() == 100.00);
    assert(atividade.getAvaliacao().getValor() == 5);
    std::cout << "Teste de atividade válida passou.\n";
}

void TesteAtividade::testarAtividadeInvalida() {
    try {
        Codigo codigo("123"); // Código inválido
        Nome nome("Atividade Interessante");
        Data data("01-01-22");
        Horario horario("14:00");
        Duracao duracao(120);
        Dinheiro preco(100.00);
        Avaliacao avaliacao(5);
        Atividade atividade(codigo, nome, data, horario, duracao, preco, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("GHI789");
        Nome nome("Nome muito muito longo que ultrapassa o limite de 30 caracteres"); // Nome inválido
        Data data("01-01-22");
        Horario horario("14:00");
        Duracao duracao(120);
        Dinheiro preco(100.00);
        Avaliacao avaliacao(5);
        Atividade atividade(codigo, nome, data, horario, duracao, preco, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("GHI789");
        Nome nome("Atividade Interessante");
        Data data("32-01-22"); // Data inválida
        Horario horario("14:00");
        Duracao duracao(120);
        Dinheiro preco(100.00);
        Avaliacao avaliacao(5);
        Atividade atividade(codigo, nome, data, horario, duracao, preco, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de atividade inválida passou.\n";
}

void TesteDestino::testarDestinoValido() {
    Codigo codigo("JKL012");
    Nome nome("Destino Exótico");
    Data dataInicio("01-01-22");
    Data dataTermino("10-01-22");
    Avaliacao avaliacao(3);
    Destino destino(codigo, nome, dataInicio, dataTermino, avaliacao);
    assert(destino.getCodigo().getValor() == "JKL012");
    assert(destino.getNome().getValor() == "Destino Exótico");
    assert(destino.getDataInicio().getValor() == "01-01-22");
    assert(destino.getDataTermino().getValor() == "10-01-22");
    assert(destino.getAvaliacao().getValor() == 3);
    std::cout << "Teste de destino válido passou.\n";
}

void TesteDestino::testarDestinoInvalido() {
    try {
        Codigo codigo("JKL"); // Código inválido
        Nome nome("Destino Exótico");
        Data dataInicio("01-01-22");
        Data dataTermino("10-01-22");
        Avaliacao avaliacao(3);
        Destino destino(codigo, nome, dataInicio, dataTermino, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("JKL012");
        Nome nome("Nome de destino muito longo que ultrapassa 30 caracteres"); // Nome inválido
        Data dataInicio("01-01-22");
        Data dataTermino("10-01-22");
        Avaliacao avaliacao(3);
        Destino destino(codigo, nome, dataInicio, dataTermino, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("JKL012");
        Nome nome("Destino Exótico");
        Data dataInicio("10-01-22");
        Data dataTermino("01-01-22"); // Data de término antes da data de início
        Avaliacao avaliacao(3);
        Destino destino(codigo, nome, dataInicio, dataTermino, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de destino inválido passou.\n";
}

void TesteHospedagem::testarHospedagemValida() {
    Codigo codigo("MNO345");
    Nome nome("Hotel Confortável");
    Dinheiro diaria(200.00);
    Avaliacao avaliacao(4);
    Hospedagem hospedagem(codigo, nome, diaria, avaliacao);
    assert(hospedagem.getCodigo().getValor() == "MNO345");
    assert(hospedagem.getNome().getValor() == "Hotel Confortável");
    assert(hospedagem.getDiaria().getValor() == 200.00);
    assert(hospedagem.getAvaliacao().getValor() == 4);
    std::cout << "Teste de hospedagem válida passou.\n";
}

void TesteHospedagem::testarHospedagemInvalida() {
    try {
        Codigo codigo("345"); // Código inválido
        Nome nome("Hotel Confortável");
        Dinheiro diaria(200.00);
        Avaliacao avaliacao(4);
        Hospedagem hospedagem(codigo, nome, diaria, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("MNO345");
        Nome nome("Hotel com nome muito longo ultrapassando 30 caracteres"); // Nome inválido
        Dinheiro diaria(200.00);
        Avaliacao avaliacao(4);
        Hospedagem hospedagem(codigo, nome, diaria, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    try {
        Codigo codigo("MNO345");
        Nome nome("Hotel Confortável");
        Dinheiro diaria(250000.00); // Diária fora do limite
        Avaliacao avaliacao(4);
        Hospedagem hospedagem(codigo, nome, diaria, avaliacao);
        assert(false);
    } catch (const std::invalid_argument&) {}

    std::cout << "Teste de hospedagem inválida passou.\n";
}