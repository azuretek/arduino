#include <RGB.h>
#include <RGBMatrix.h>

char colors[7] = {RED, GREEN, BLUE, ORANGE, MAGENTA, TEAL, WHITE};

void setup()
{
    delay(5000);
    RGBMatrix.begin(2);
}

void loop()
{
  char * message = "INFRA FOR LYFE";

  for(char color=1; color<7; color++)
  {
     RGBMatrix.scroll(message, colors[color], 30);
  }
}
