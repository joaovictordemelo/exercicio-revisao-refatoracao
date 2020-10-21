#include "Engenheiro.cpp"
#include "Vendedor.cpp"

template <class T>
T put(T a){

  std::cout << "Nome: " << a.nome << std::endl;
  std::cout << "Salario Mes: " << a.pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << a.projetos << std::endl;
  std::cout << std::endl;
} 

template <class T>
T write(T a){
  
  std::cout << "Nome: " << a.nome << std::endl;
  std::cout << "Salario Mes: " << a.pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << a.quotaTotalAnual() << std::endl;
} 
template <class T>
T set(T a){
std::cin << a.nome << a.salarioHora << a.projetos << a.horasTrabalhadas;
}

int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3;
  eng1.horasTrabalhadas = 8.5;

  
  put(eng1);
 
  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1; 
  eng2.horasTrabalhadas = 8;
	
  put(eng2);
 
  
  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2;
  eng3.horasTrabalhadas = 8;
	
  put(eng3);

  
  
  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  vend1.quotaMensalVendas = 5000;
  vend1.horasTrabalhadas = 6;
  
  write(vend1);
  
  std::cout << "Nome: " << vend1.nome << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  vend2.quotaMensalVendas = 3000;
  vend2.horasTrabalhadas = 8;
	
  write(vend2);
   
	
  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  vend3.quotaMensalVendas = 4000;
  vend3.horasTrabalhadas = 8;
  
  write(vend3);
	
//primeira solucao

//uma outra solucao seria considerar um template para leitura, ou mesmo usar namespaces para nome, por exemplo;
//mas essa é a forma mais eficiente, sem alterar os dados dados;
	
	

  
  return 0;	
}
