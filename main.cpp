/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: HP PC
 *
 * Created on 25 de octubre de 2019, 08:19 AM
 */

#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main() {

    int precio[]={1,5,8,9,10,17,17,20,24,30};
    int n, temp=0, aux=0,aux2=0,aux3=0,aux4=0;
    string cadena;
    cadena="";
    cin >> n;
    int respuesta[n];
    respuesta[0]=1;
    
    if(n==1){
        cout << "La venta máxima es 1"<< endl;
        cout<< "Cortando la soga en tamaños de 1"<<endl;
    }
    else{
        for(int i=1; i<n; i++){
        
            for(int j=0; j<i;j++){
                temp=respuesta[j]+respuesta[i-1-j];
                aux2=i-1-j+1;
                aux3=j+1;
                if(max(temp,aux)==temp){
                    cadena= to_string(aux3)+ " y "+ to_string(aux2);
                }
                aux=max(temp,aux);


            }
            if(max(aux,precio[i])==precio[i]){
                aux4=i+1;
                cadena=to_string(aux4);
            }

            respuesta[i]=max(aux, precio[i]);
            aux=0;
            temp=0;

        }

        cout << "La venta máxima es "  << respuesta[n-1]<<endl;
        cout<< "Utilizando trozos de longitudes de: " << cadena<<endl;
    }
    
    
    return 0;
}

