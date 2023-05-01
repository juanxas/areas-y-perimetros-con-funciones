#include <stdio.h>
float circulo_perimetro (float radiof){ 
    float perimetroc;
    perimetroc = 2*3.14 * radiof;
    return perimetroc;
    
}

float circulo_area (float radiok){  
    float areac;
    areac = 3.14*radiok*radiok;
    return areac;

}

float triangulo_perimetro (float lado1K , float lado2K, float lado3K){
    float perimetrok;
    perimetrok = lado1K + lado2K + lado3K;
    return perimetrok; 
        
}

float triangulo_area (float baseFE, float alturaFE){ 
    float areaF;
    areaF= (baseFE*alturaFE)/2;
    return areaF;

}

float rectangulo_perimetro (float baseRR, float alturaRR){

    float perimetroE;
    perimetroE = 2*(baseRR+alturaRR);
    return perimetroE;

} 

float rectangulo_area (float baseR, float alturaR){

    float areaT;
    areaT = baseR*alturaR;
    return areaT;
   
}

float cuadrado_perimetro (float ladoPc){
    
    float perimetroO;
    perimetroO = ladoPc+ladoPc+ladoPc+ladoPc;
    return perimetroO;

}

float cuadrado_area (float ladoAC){
    
    float areaU;
    areaU = ladoAC*ladoAC;
    return areaU;

}

float trapecio_perimetro (float ladoA,float ladoB,float ladoC,float ladoD){
   
    float perimetro;
    perimetro = ladoA+ladoB+ladoC+ladoD;
    return perimetro; 

}

float trapecio_area (float BASE_MAYOR, float base_menor, float altura){
  
    float area;
    area = ((BASE_MAYOR+base_menor)/2)*altura;
    return area;
    
}

void imprimir_circulo(){
    float radioR;
    float circuloarea;
    float circuloperimetro;
    printf("\nIngrese el radio del circulo:");
    scanf("%f", &radioR);
    circuloarea = circulo_area(radioR);
    circuloperimetro= circulo_perimetro(radioR);
    printf("\nEl area del circulo es %.2f", circuloarea);
    printf("\nEl perimetro del circulo es %.2f\n", circuloperimetro);

}

void imprimir_triangulo(){
    float baseF, alturaF, ladoK1, ladoK2, ladoK3;
    float trianguloarea;
    float trianguloperimetro;
    printf("\nIngrese la base del triangulo :");
    scanf("%f",&baseF);
    printf("\nIngrese la altura del traingulo :");
    scanf("%f",&alturaF);
    printf("\nIngrese lo que mide el primer lado del triangulo :");
    scanf("%f",&ladoK1);
    printf("\nIngrese lo que mide el segundo lado del triangulo :");
    scanf("%f",&ladoK2);
    printf("\nIngrese lo que mide el tercer lado del triangulo :");
    scanf("%f",&ladoK3);
    trianguloarea = triangulo_area ( baseF, alturaF);
    trianguloperimetro = triangulo_perimetro (ladoK1,ladoK2,ladoK3);
    printf("\nEl area del triangulo es %.2f", trianguloarea);
    printf("\nEl perimetro del triangulo es %.2f\n", trianguloperimetro);
    
}

void imprimir_rectangulo(){
    float baser, alturar;
    float rectanguloperimetro;
    float rectanguloarea;
    printf("\nIngrese la base del rectangulo :");
    scanf("%f", &baser);
    printf("\nIngrese la altura del rectangulo :");
    scanf("%f", &alturar);
    rectanguloperimetro = rectangulo_perimetro(baser,alturar);
    rectanguloarea = rectangulo_area(baser,alturar);
    printf("\nEl area del rectangulo es %.2f", rectanguloarea);
    printf("\nEl perimetro del rectangulo es %.2f\n", rectanguloperimetro);
}

void imprimir_cuadrado(){
    float ladov;
    float cuadradoarea;
    float cuadradoperimetro;
    printf("\nIngrese el lado del cuadrado :");
    scanf("%f", &ladov);
    cuadradoarea = cuadrado_area(ladov);
    cuadradoperimetro = cuadrado_perimetro(ladov);
    printf("\nEl area del cuadrado es %.2f", cuadradoarea);
    printf("\nEl perimetro del cuadrado es %.2f\n", cuadradoperimetro);
}
void imprimir_trapecio(){
    float BASE_MAYOR, base_menor, altura, ladoA, ladoB, ladoC, ladoD,area, perimetro;
    printf("Ingrese la longitud de la base mayor: ");
    scanf("%f", &BASE_MAYOR);
    printf("Ingrese la longitud de la base menor: ");
    scanf("%f", &base_menor);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);
    printf("Ingrese la longitud del lado a: ");
    scanf("%f", &ladoA);
    printf("Ingrese la longitud del lado b: ");
    scanf("%f", &ladoB);
    printf("Ingrese la longitud del lado c: ");
    scanf("%f", &ladoC);
    printf("Ingrese la longitud del lado d: ");
    scanf("%f", &ladoD);
    area = trapecio_area(BASE_MAYOR, base_menor, altura);
    perimetro = trapecio_perimetro(ladoA, ladoB, ladoC, ladoD);
    printf("El area del trapecio es: %.2f\n", area);
    printf("El perimetro del trapecio es: %.2f\n", perimetro);
}

    
void menu (){
    int opcion;
    do{
        printf("\n****Bienvenido a su calculador de area y perimetro********\n");
        printf("1. Calcular un circulo\n");
        printf("2. Calcular un triangulo\n");
        printf("3. Calcular un rectangulo\n");
        printf("4. Calcular un cuadrado\n");
        printf("5. Calcular un trapecio\n");
        printf("6. Salir\n");
        printf("Ingrese la opcion :");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:
                imprimir_circulo();
            break;

            case 2:
                imprimir_triangulo();
            break;
            
            case 3:
                imprimir_rectangulo();
            break;
            
            case 4:
                imprimir_cuadrado();
            break;
              
            case 5:
                imprimir_trapecio();
            break;

            case 6:
            printf("saliendo del programa\n");
            break;

            default:
            printf("\nOpcion invalida. Porfavor, seleccione una opcion valida por favor\n");
            break;
        
        }
    }while (opcion !=6);

}
int main(){
menu();
}