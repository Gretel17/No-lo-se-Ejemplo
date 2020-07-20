/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculadorasimple;

import java.util.Scanner;

/**
 *
 * @author grete
 */

public class calculos {
    
    Integer opc;
    Double numero1 , numero2,resultado;
    Scanner scan =new Scanner(System.in);
   
    public void opciones(){
        
        System.out.println("SUMA           [1]");
        System.out.println("RESTA          [2]");
        System.out.println("MULTIPLICACION [3]");
        System.out.println("DIVICION       [4]");
        
        System.out.println("Ingrese su opcion: ");
        this.opc=this.scan.nextInt();
        
        switch(opc)
        {
            case 1:
                suma();
            break;
            case 2:
                resta();
            break;
            case 3:
                multi();
            break;
            default:
                div();
                
        }
    }
    
    public void suma()
    {
        System.out.println("Ingrese el primer numero: ");
        this.numero1=this.scan.nextDouble();
        System.out.println("Ingrese el segundo numero: ");
        this.numero2=this.scan.nextDouble();
        
        resultado=numero1+numero2;
      
    }
    
    public void resta(){
        System.out.println("Ingrese el primer numero: ");
        this.numero1=this.scan.nextDouble();
        System.out.println("Ingrese el segundo numero: ");
        this.numero2=this.scan.nextDouble();
        
        resultado=numero1-numero2;
        
    }
    
    public void multi(){
        System.out.println("Ingrese el primer numero: ");
        this.numero1=this.scan.nextDouble();
        System.out.println("Ingrese el segundo numero: ");
        this.numero2=this.scan.nextDouble();
        
        resultado=numero1*numero2;
    }
    
    public void div(){
        System.out.println("Ingrese el primer numero: ");
        this.numero1=this.scan.nextDouble();
        System.out.println("Ingrese el segundo numero: ");
        this.numero2=this.scan.nextDouble();
        
        resultado=numero1/numero2;
    }
    
    public void mostrar(){
        
        System.out.println("El primer numero es: "+this.numero1 
                        + "\n\t El segundo numero es: "+this.numero2
                        + "\n\t El resultado es: "+this.resultado);
    }
    
    
}
