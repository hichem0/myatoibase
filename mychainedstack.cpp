#include "mychainedstack.h"//
// Created by hichem on 2018-10-08.
//


#include <iostream>
#include "mystack.h"

using namespace std;



    Mychainedstack :: Mychainedstack() {

         stack = nullptr;

    };

    void Mychainedstack :: push(int i) {


        element* node = new element;
        node->val = i;

            if (stack == nullptr) {

                node->next = nullptr;
                stack = node;

               // cout << "AJOUTER a vide " << endl;

            }
            else
            {
                node->next = stack;
                stack=node;
               // cout << "AJOUTER plein " << endl;

            }

            element* temp = stack;

            while(temp != nullptr)
            {
                //cout << temp->val << "-";
                temp = temp->next;

            }
       // cout << endl;


    };


int Mychainedstack :: pop(void) {


            if(stack == nullptr){
                return -16384;
            } else {

                element *temp = stack;
                stack = stack->next;
                int v = temp->val;
                delete(temp);
               // cout << "j enleve la valeur " << v << endl;
                return v;
            }

        };

int Mychainedstack :: operator%(int mod) const {

    if(mod < 2)
    {
        return -65536;
    } else {

        int count=0;

        element *temp = stack;
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }

        return count%mod;

    }



};

void Mychainedstack :: clear() {

    while (stack!= nullptr){
        element *temp = stack;
        stack = stack->next;
        delete(temp);

        }




};















