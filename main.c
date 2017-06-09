
#include"func.h"

extern int exit_flag;
extern int stage_clear_flag;
extern int stage; 
int main(void){
    stage_clear_flag = 1;
    stage = StageClearFileLoad();
     for (;;) {
         if(stage_clear_flag !=0 ){  // 스테이지가 바뀔 때마다 한번 씩 호출되는 것들. 
             system("cls"); //  화면을 지운다. 
             GameStageInit(); // 스테이지 저보를 읽어와서 초기화를 진행하고 
             GameStateDraw(); // 스테이지 정보를 출력한다. 
         }
        PlayerMoveAction();
        if(exit_flag != 0) break;
    }
    return 0;
}
