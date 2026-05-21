#include <stdio.h>

int main() {
  char names [5][20] = {
"Aaron"
"Bonnie"
"Cindy"
"Danie"
"Ethan"
};
int scores [5][13];
float average [5];
float totalaverage = 0;
int i;
int j;
for(i = 0; i< 5; i++) {
int sum = 0;
scanf(
  "p1=%d, p2=%d, p3=%d, p4=%d, p5=%d, p6=%d, p7=5d, p8=%d, p9=%d, p10=%d, p11=%d, p12=%d, p13=%d,
  &scores[i][0],
  &scores[i][1],
  &scores[i][2],
  &scores[i][3],
  &scores[i][4],
  &scores[i][5],
  &scores[i][6],
  &scores[i][7],
  &scores[i][8],
  &scores[i][9],
  &scores[i][10],
  &scores[i][11],
  &scores[i][12],
  );
  //13 tests
for(j= 0; j< 13; j++) {
sum += scores[i][j];
}
average[i] = sum / 13.0;
totalaverage += average[i];
}
int highest = 0;
for(i = 1; < 5; i++) {
if(average[i] > average[highest])
{
  //highest average
highest =i;
}
}
printf("%s\n", names [highest]);
//overall avarage
totalaverage /= 5;
//below average
for(i = 0; i< 5; i++) {
if(average[i] <totalaverage) {
printf("%s\n", names[i];
}
return 0;
}
