#include<iostream>
#include"Ponto.h"
#include <math.h>
#include <stdio.h>
using namespace std;

    void Ponto::addPonto(float x,float y, float z,FILE* out)
    {
        this->ponto[0]=x;this->ponto[1]=y;this->ponto[2]=z;
        fprintf(out,"%f,%f,%f\n",this->ponto[0],this->ponto[1],this->ponto[2]);
        cout<<this->ponto[0]<<","<<this->ponto[1]<<","<<this->ponto[2]<<endl;
        this->pnormal[0]=0;this->pnormal[1]=0;this->pnormal[2]=0;
        this->sTnomal[0]=0;this->sTnomal[1]=0;this->sTnomal[2]=0;
        this->nTincidentes=0;
    }

    float* Ponto::GetPonto()
    {
        return this->ponto;
    }
    float* Ponto::GetPnormal()
    {
        return this->pnormal;
    }
    float* Ponto::GetPvista()
    {
        return this->PVista;
    }
    void Ponto::addPvista(float* v)
    {
        this->PVista[0]=*v;
        this->PVista[1]=*(v+1);
        this->PVista[2]=*(v+2);
    }
    void Ponto::addTnormal(float x,float y,float z)
    {
        this->sTnomal[0]=this->sTnomal[0]+x;
        this->sTnomal[1]=this->sTnomal[1]+y;
        this->sTnomal[2]=this->sTnomal[2]+z;
        this->nTincidentes++;
        this->pnormal[0]=sTnomal[0]/this->nTincidentes;
        this->pnormal[1]=sTnomal[1]/this->nTincidentes;
        this->pnormal[2]=sTnomal[2]/this->nTincidentes;
    }
