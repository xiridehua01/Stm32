#ifndef __OLED_H
#define __OLED_H			  	 
#include "sys.h"
#include "stdlib.h"	    
		    						  
//-----------------OLED端口定义----------------  
#define OLED_SCLK 	PEout(6)
#define OLED_SDIN 	PEout(4)
#define OLED_RST    PEout(2)	
#define OLED_RS 	PEout(3)
#define OLED_CS 	PEout(5)


#define OLED_CMD  	0		//写命令
#define OLED_DATA 	1		//写数据
//OLED控制用函数
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);//更新显存到OLED		   
							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y,const u8 *p,u8 size);

void OLED_Showhz(u8 x,u8 y,u8 fnum);
void OLED_Showhzstring(u8 x,u8 y,const u8 *p);

#endif  
	 



