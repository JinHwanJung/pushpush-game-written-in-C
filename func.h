#ifndef __H__FUNC
#define __H__FUNC
//----------- �Լ� ������ 
void GameStageSizeSet(const char* pnt); // ���������� �׷� �� �������� ��������� �����ϰ� �ȴ�. 
void GameStageToMap(const char* pnt);  // 2���� �迭 map�� ���������� �����͸� �־��ش�. 2������ �ε����� �� ��ǥ�� �ȴ�.  
void CursorView(char show); // Ŀ���� ���̰ų� �����.  
void gotoxy(int x, int y); // x, y�� Ŀ���� �̵���Ų��. 
void SetColor(int color); // �ܼ� ���� ���� 
int GameGetPosition(const char *pnt); // �����Ͱ� ����Ű�� ���� �����͸� 2�� �о �� ���� ���ڷ� ��ȯ�ؼ� ��ȯ�Ѵ�. 
void GamePlayerPositionSet(const char *pnt); // �÷��̾�(��)�� x��ǥ�� y��ǥ�� stage�� �� �� 4�ڸ� ���ؼ� �����´�. 
void PlayerDraw(void); // �÷��̾ �׷��ִ� �Լ���. 
void MapDraw(int x, int y); // ���� x,y�� �������ָ� 2���� �迭�� map �迭�� �� �ε����� �����͸� �׷��ִ� �Լ�. 
void PlayerErase(void); // �÷��̾ �����ִ� �Լ� 
void GameDraw(void); // �� ��ü�� ����ϴ� �Լ� 
void PlayerMoveAction(void); // �÷����� �������� �����ϰ� �÷��̾ �̵������ִ� �Լ���. 
void GameStageInit(void); // ���α׷��� �ʱ� ȣ��Ǿ�� �ϴ� �Լ����� ����. 
int StageClearCheck(void); // ���������� Ŭ���ư� ���� �� 1�� ��ȯ, ���� �� 0�� ��ȯ 
void GameStateDraw(void);  // ������ ������ �����ʿ� ����� �ش�. 
void PlayerMoveCountDraw(void); // �÷��̾��� ������ Ƚ���� ����Ѵ�.  
void PlayerPushCountDraw(void); // �÷��̾��� Ǫ�� Ƚ���� ����Ѵ�.  
void UndoSave(void); // ���� ������(��, �÷������� ��)�� �����Ѵ�. 
void GameUndo(void); // ���� �����ͷ� ���ͽ����ش�.
void StageClearFileSave(void); // �������� Ŭ��� �� ������ ���Ϸ� ���� ��Ų��. 
int StageClearFileLoad(void); // ���������� ��� ���� ������ �� ������ �ҷ��鿩�� �˾Ƴ� �� �� �������� ��ȣ�� �Ѱ��ش�. 
void StageReplayLoad(void); // �������� ���÷��̸� ���Ϸ� ���� �о�´�.  
char GetKey(void); // Ű�� �Է¹޾Ƽ� ũ Ű�� ��ȯ�Ѵ�.
char GetKeyReplay(void); // �Է¹��� ���÷��� ������ �ϳ� �о ��ȯ�Ѵ�.
 

#endif
