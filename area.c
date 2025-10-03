  #include <stdio.h>
int main(){
    int period,dutyCycle,onTime,offTime,i;
    printf("Enter PWM period(number of steps):");
    scanf("%d",&period);

    printf("Enter duty cycle (0-100 %%):");
    scanf("%d", &dutyCycle);

    onTime=(period*dutyCycle)/100;
    offTime=period-onTime;

    printf("Simulated PWM Pulse:\n");
    for(i=0;i<onTime;i++)
    {
        printf("1");
    }
    for(i=0;i<offTime;i++)
    {
        printf("0");
    }
    printf("\n");
}
