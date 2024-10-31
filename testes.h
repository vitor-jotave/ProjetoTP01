#ifndef TESTES_H
#define TESTES_H

// Testes para classes de domínio
class TesteAvaliacao {
public:
    static void testarAvaliacaoValida();
    static void testarAvaliacaoInvalida();
};

class TesteCodigo {
public:
    static void testarCodigoValido();
    static void testarCodigoInvalido();
};

class TesteData {
public:
    static void testarDataValida();
    static void testarDataInvalida();
};

class TesteDinheiro {
public:
    static void testarDinheiroValido();
    static void testarDinheiroInvalido();
};

class TesteDuracao {
public:
    static void testarDuracaoValida();
    static void testarDuracaoInvalida();
};

class TesteHorario {
public:
    static void testarHorarioValido();
    static void testarHorarioInvalido();
};

class TesteNome {
public:
    static void testarNomeValido();
    static void testarNomeInvalido();
};

class TesteSenha {
public:
    static void testarSenhaValida();
    static void testarSenhaInvalida();
};

// Testes para classes de entidade
class TesteConta {
public:
    static void testarContaValida();
    static void testarContaInvalida();
};

class TesteViagem {
public:
    static void testarViagemValida();
    static void testarViagemInvalida();
};

class TesteAtividade {
public:
    static void testarAtividadeValida();
    static void testarAtividadeInvalida();
};

class TesteDestino {
public:
    static void testarDestinoValido();
    static void testarDestinoInvalido();
};

class TesteHospedagem {
public:
    static void testarHospedagemValida();
    static void testarHospedagemInvalida();
};

#endif //TESTES_H
