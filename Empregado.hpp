#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
  class Empregado {
    public:
      Empregado (std::string nome, double salarioHora): nome(nome), salarioHora(salarioHora) {};

    protected:
      std::string nome;
      double salarioHora;

    public:
      void setNome(std::string nome) {
        this->nome = nome;
      };

      void setSalarioHora(double hora) {
         this->salarioHora = hora;
      };

      std::string getNome() {
        return this->nome;
      };

      double getSalarioHora() {
        return this->salarioHora;
      };

      void getEmpregadoInfo(double horasTrabalhadas) {
        std::cout << "Nome: " << this->getNome() << std::endl;
        std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
      };

      double pagamentoMes(double horasTrabalhadas) {
        if (horasTrabalhadas > 8) {
          horasTrabalhadas -= 8;
          horasTrabalhadas += (horasTrabalhadas / 2);
        }

        return horasTrabalhadas * this->getSalarioHora();
      };
  };
#endif