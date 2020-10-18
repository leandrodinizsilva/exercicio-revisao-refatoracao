#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {
  public:
    Vendedor (std::string nome, double salarioHora, int quotaMensalVendas) : Empregado(nome,salarioHora), quotaMensalVendas(quotaMensalVendas) {};

   protected:
    double quotaMensalVendas;

  public:
    void setQuotaMensalVendas(double vendas) {
      this->quotaMensalVendas = vendas;
    }

    double getQuotaMensalVendas() {
      return this->quotaMensalVendas;
    }

    double quotaTotalAnual() {
      return this->getQuotaMensalVendas() * 12;
    }

    void getEmpregadoInfo(double horasTrabalhadas) {
      Empregado::getEmpregadoInfo(horasTrabalhadas);
      std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
      std::cout << std::endl;
    };
};