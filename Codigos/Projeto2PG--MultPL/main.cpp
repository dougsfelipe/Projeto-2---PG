#include "Ponto.h"
#include "Triangulo.h"
#include<iostream>
#include"Camera.h"
#include"Functions.h"
#include"Objeto.h"
#include"Iluminacao.h"
#include <stdio.h>

using namespace std;

int main()
{
    FILE* out=fopen("out.txt","w");
    Functions funct;
    Camera cam;
    Objeto obj;
    Iluminacao Iluminacao;
    cam.InicializarCam(&funct);
    obj.iniciarObj(&funct);
    Iluminacao.inicarIluminacao(&funct);
    obj.calPtela(cam.Getd(),cam.Gethx(),cam.Gethy(),1080,1080);
    fprintf(out,"camera:\n");
    cam.printCam(out);
    fprintf(out,"iluminacao:\n");
    Iluminacao.printIlumi(out);
    fprintf(out,"Pontos:\n");
    obj.printNormalPontos(out);
    fprintf(out,"Normal triangulos:\n");
    obj.printNormalTriangulos(out);
    fclose(out);

    return 0;
}
