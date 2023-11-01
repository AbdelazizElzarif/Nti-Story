
#include "StdTupes.h"
#include "LCD_Interface.h"
#include "Little_Story.h"
u8 story[MAX_STORY]="Free palestine";
void Story_Init(void)
{
	LCD_Clear();
}
void Story_run(void)
{
	LCD_MoveOn(story);
}
