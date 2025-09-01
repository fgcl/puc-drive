/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bancoJF;

/**
 *
 * @author 1591632
 */
public class ContaCorrente {
    private String cpf;
    private int conta;
    private float saldo;
    
    ContaCorrente(int conta, String digito){
        this.saldo = 0;
        this.conta = conta;
        this.cpf = digito;
    }
    float getSaldo(){
        return saldo;
    }
    void setSaldo(int valor){
        if (valor < 0){
            float desconto = (float) 1.05 * valor;
            //System.out.println(desconto);
            saldo = saldo + desconto;
        }
        else{
            saldo = saldo + valor;
        }
    }
    String getCPF(){
        return cpf;
    }
    void exibir(){
        System.out.println("Numero da conta:" + conta);
        System.out.println("CPF:" + cpf);
        System.out.println("Saldo:" + saldo);
    }
    
}