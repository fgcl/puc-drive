/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bancoJF;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author 1591632
 */
public class BancoJF {

    private int identificador;
    private String nome;
    private ArrayList<ContaCorrente> correntistas;

    /**
     * @param args the command line arguments
     */
    public BancoJF(int identificador, String nome) {
        this.identificador = identificador;
        this.nome = nome;
        this.correntistas = new ArrayList<>();

    }

    public static void main(String[] args) {
        // TODO code application logic here
        ContaCorrente c1 = new ContaCorrente(1, "1");
        ContaCorrente c2 = new ContaCorrente(2, "2");
        ContaCorrente c3 = new ContaCorrente(3, "3");
        //c1.setSaldo(-10);
        //c1.exibir();
        BancoJF banco = new BancoJF(1, "Banco1");
        banco.abrirConta(c1);
        banco.abrirConta(c2);
        banco.abrirConta(c3);
        banco.getCorrentista("1").setSaldo(1000);
        banco.getCorrentista("2").setSaldo(500);
        banco.getCorrentista("3").setSaldo(-200);
        banco.encerrarConta(0);
        banco.exibeCorrentistas();
    }

    public int getCodigo() {
        return identificador;
    }

    public void setCodigo(int codigo) {
        this.identificador = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<ContaCorrente> getCorrentistas() {
        return correntistas;
    }

    public void abrirConta(ContaCorrente conta) {
        correntistas.add(conta);
    }

    public void encerrarConta(int indice) {
        correntistas.remove(indice);
    }
    
    public ContaCorrente getCorrentista(String cpf) {
        for (ContaCorrente conta : correntistas) {
            if (conta != null && conta.getCPF().equals(cpf)) {
                return conta;
            }
        }
        return null;
    }
    public void exibeCorrentistas() {
        for (ContaCorrente conta : correntistas) {
            if (conta != null) {
                conta.exibir();
            }
        }
    }
}
