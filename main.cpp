#include "testes.h"

int main()
{
    //teste avaliação
    TesteAvaliacao::testarAvaliacaoValida();
    TesteAvaliacao::testarAvaliacaoInvalida();

    //teste codigo
    TesteCodigo::testarCodigoValido();
    TesteCodigo::testarCodigoInvalido();

    //teste data
    TesteData::testarDataValida();
    TesteData::testarDataInvalida();

    //teste dinheiro
    TesteDinheiro::testarDinheiroValido();
    TesteDinheiro::testarDinheiroInvalido();

    //teste duracao
    TesteDuracao::testarDuracaoValida();
    TesteDuracao::testarDuracaoInvalida();

    //teste horario
    TesteHorario::testarHorarioValido();
    TesteHorario::testarHorarioInvalido();

    //teste nome
    TesteNome::testarNomeValido();
    TesteNome::testarNomeInvalido();

    //teste senha
    TesteSenha::testarSenhaValida();
    TesteSenha::testarSenhaInvalida();

    //teste conta
    TesteConta::testarContaValida();
    TesteConta::testarContaInvalida();

    //teste viagem
    TesteViagem::testarViagemValida();
    TesteViagem::testarViagemInvalida();

    //teste atividade
    TesteAtividade::testarAtividadeValida();
    TesteAtividade::testarAtividadeInvalida();

    //teste destino
    TesteDestino::testarDestinoValido();
    TesteDestino::testarDestinoInvalido();

    //teste hospedagem
    TesteHospedagem::testarHospedagemValida();
    TesteHospedagem::testarHospedagemInvalida();
}