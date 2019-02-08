#include <stdio.h>
#include <string.h>
#include <limits.h>
int puissance(int base,int exp) {
    int res=1;
    while(exp>=1) {
        res*=base;
        exp--;
    }
    return(res);
}
int myatoibase(const char *nptr,const int base)
{
    int conv=0;
    int resultat=0;
    int baseTemp = strlen(nptr)-1;
    int i=0;
    int  negative=0;//0 =false ,1 = true
    if(nptr==NULL){
        return 0;
    }
    if (nptr[0]=='0' || nptr[1]=='0'){
        printf("cas 0");
        return -1;
    }
    if (base<2 || base>37)
    {
        printf("base non valide");
        return -2;
    }
    if (nptr[0]=='-'){
        negative =1;
        i=1;
        baseTemp = strlen(nptr)-2;
    }
    while (nptr[i]!='\0')
    {
        char temp= nptr[i];
        
        if (temp >= '0' && temp <= '9'){
            conv=(int)temp - 48;
            if (conv < base)
            {
                resultat += conv *  puissance(base, baseTemp);
                --baseTemp;
            }
            else{
                
                return -1;
            }
        }
        else
        {
            if (temp>='a' && temp<='z'){
                conv=(int)temp - 87;
                if (conv < base)
                {
                    resultat += conv *  puissance(base, baseTemp);
                    --baseTemp;
                }
                else{
                    printf(" superieur a la range az");
                    return-1;
                }
            }
            else
            {
                if (temp=='!'){
                    conv = 36;
                    if (conv < base)
                    {
                        resultat += conv *puissance(base, baseTemp);
                        --baseTemp;
                    }
                    else{
                        printf(" ! superieur  a la range");
                        return-1;
                    }
                }
                else{
                    printf("Le nombre nest pas valide");
                    return -1;
                }
                
            }
        }
        i++;
    }
    if (negative==1)
    {
        resultat = -resultat;
    }
    
    if (resultat <= INT_MIN/10|| resultat >= INT_MAX/10){
        return-3;//-3 veut dire que le nombre est indifini
    }
    else
    {
        return resultat;
    }
}
