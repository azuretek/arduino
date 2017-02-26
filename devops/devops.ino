#include <RGB.h>
#include <RGBMatrix.h>

void setup()
{
    delay(5000);
    RGBMatrix.begin(2);
}

void loop()
{
  RGBMatrix.scroll("DEVOPS FOR LYFE", RED, 30);
}
