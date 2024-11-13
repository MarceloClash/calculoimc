#include <iostream>
#include <locale>
#include <cmath>


using namespace std;


//classificaçao do indice de massa corporal
string ClassificarIMC(double imc){
    if(imc < 16.0) {
        return "Magreza grave";
    }
    else if (imc == 16.0 || imc < 17.0){
        return "Magrez moderada";
    }
    else if (imc == 17.0 || imc < 18.5){
        return "Magreza leve";
    }
    else if (imc == 18.5 || imc < 25.0){
        return "Saudavel";
    }
    else if (imc == 25.0 || imc < 30){
        return "Sobrepeso";
    }
    else if (imc == 30.0 || imc < 35.0){
        return "Obesidade Grau I";
    }
    else if (imc == 35.0 || imc < 40.0){
        return "Obesidade Grau II";
    }
    else {
        return "Obesidade Grau III";
    }
}
//calculo do indice da massa corporal
double CalcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

// Resgate de valores e retorno do calculo para usuario
void progamaIMC(string versao) {
    double peso, altura, imc;

    cout << "================================" << endl;
    cout << "Calculo do IMC - Versão " << versao << endl;
    cout << "================================" << endl;

    cout << "Insira o seu peso em quilogramas: ";
    cin >> peso;
    cout << "Insira a sua altura em metros: ";
    cin >> altura;

    imc = CalcularIMC(peso, altura);

    cout << endl << "Seu Indice De Massa Corporal é: " << imc << "kg/m²" << endl;
    cout << "Classificação: " << ClassificarIMC(imc) << "." << endl;

}
//Metodo principal do progama
int main(int argc, char *argv[]){
    string versao = "1.0";

    /* locale configurado para portugues do Brasil e inserido nas 
    funcoes de saida (std::cout) e entrada (std::cin).
    
    Isto permite o uso de virgula em numeros fracionarios ao inves do ponto.
    */
   locale myLocale("pt_BR.UTF-8");
   cout.imbue(myLocale);
   cin.imbue(myLocale);

   progamaIMC(versao);

   



}