// 交通工具
#include <stdio.h>

typedef struct{
    char model[50];
    int horsepower;
} Car;

typedef struct {
    char model[50];
    int has_gears;
} Bicycle;

typedef struct {
    char model[50];
    int max_passengers;
} Airplane;

typedef union {
    Car car;
    Bicycle bicycle;
    Airplane airplane;
} Vehicle;

void display_vehicle_info(int type, Vehicle vehicle);

int main(){
    Vehicle vehicle;
    int choice;

    printf("選擇交通工具類型:\n");
    printf("1 汽車\n");
    printf("2 自行車\n");
    printf("3 飛機\n");
    printf("輸入選擇(1-3)\n");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf("請輸入汽車型號:");
            scanf("%s", &vehicle.car.model);
            printf("請輸入發動機馬力:");
            scanf("%d", &vehicle.car.horsepower);
            break;
        case 2:
            printf("請輸入自行車型號:");
            scanf("%s", &vehicle.bicycle.model);
            printf("是否有變速功能(1-是 0=否)");
            scanf("%d", &vehicle.bicycle.has_gears);
            break;
        case 3:
            printf("請輸入飛機型號:");
            scanf("%s", &vehicle.airplane.model);
            printf("請輸入最大載客量:");
            scanf("%d", &vehicle.airplane.max_passengers);
            break;
        default:
            printf("none");
            return 1;
    }
}

//輸出結果
/*
選擇交通工具類型:
1 汽車
2 自行車
3 飛機
輸��選擇(1-3)
1
請輸入汽車型號:44552K
請輸入發動機馬力:5090000
*/
