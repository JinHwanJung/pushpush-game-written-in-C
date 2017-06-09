# pushpush-game-written-in-C
pushpush game written in C

// 함수
void GameStageSizeSet(const char* pnt); // 스테이지를 그려 줄 시작점을 상대적으로 세팅하게 된다. 
void GameStageToMap(const char* pnt);  // 2차원 배열 map에 스테이지의 데이터를 넣어준다. 2차원의 인덱스는 곧 좌표가 된다.  
void CursorView(char show); // 커서를 보이거나 숨긴다.  
void gotoxy(int x, int y); // x, y로 커서를 이동시킨다. 
void SetColor(int color); // 콘솔 색깔 지정 
int GameGetPosition(const char *pnt); // 포인터가 가리키는 곳의 데이터를 2개 읽어서 그 밧을 숫자로 변환해서 반환한다. 
void GamePlayerPositionSet(const char *pnt); // 플레이어(별)의 x좌표와 y좌표를 stage에 맨 앞 4자를 통해서 가져온다. 
void PlayerDraw(void); // 플레이어를 그려주는 함수다. 
void MapDraw(int x, int y); // 인자 x,y를 전달해주면 2차원 배열인 map 배열의 그 인덱스의 데이터를 그려주는 함수. 
void PlayerErase(void); // 플레이어를 지워주는 함수 
void GameDraw(void); // 맵 전체를 출력하는 함수 
void PlayerMoveAction(void); // 플레어의 움직임을 감지하고 플레이어를 이동시켜주는 함수다. 
void GameStageInit(void); // 프로그램의 초기 호출되어야 하는 함수들의 묶음. 
int StageClearCheck(void); // 스테이지가 클리아가 됬을 시 1을 반환, 실패 시 0을 반환 
void GameStateDraw(void);  // 게임의 정보를 오른쪽에 출력해 준다. 
void PlayerMoveCountDraw(void); // 플레이어의 움직임 횟수를 출력한다.  
void PlayerPushCountDraw(void); // 플레이어의 푸시 횟수를 출력한다.  
void UndoSave(void); // 이전 데이터(맵, 플레이정보 등)을 저장한다. 
void GameUndo(void); // 이전 데이터로 복귀시켜준다.
void StageClearFileSave(void); // 스테이지 클리어를 한 정보를 파일로 저장 시킨다. 
int StageClearFileLoad(void); // 스테이지를 어디서 부터 시작할 지 파일을 불러들여서 알아낸 후 그 스테이지 번호를 넘겨준다. 
void StageReplayLoad(void); // 스테이지 리플레이를 파일로 부터 읽어온다.  
char GetKey(void); // 키를 입력받아서 크 키를 반환한다.
char GetKeyReplay(void); // 입력받은 리플레이 정보를 하나 읽어서 반환한다.

// main

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
