#include "Player.h"

/**
 * コンストラクタ
 */
CPlayer::CPlayer() :
m_Mesh(),
m_Pos(0.0f,0.0f,0.0f),
m_RotZ(0.0f){
}

/**
 * デストラクタ
 */
CPlayer::~CPlayer(){
}

/**
 * 読み込み
 */
bool CPlayer::Load(void){
	// メッシュの読み込み
<<<<<<< HEAD
	return true;
=======
	if (!m_Mesh.Load("player.mom"))
	{
		return true;
	}
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * 初期化
 */
void CPlayer::Initialize(void){
<<<<<<< HEAD
=======
	m_Pos = Vector3(0.0f, 0.0f, -FIELD_HALF_Z + 2.0f);
	m_RotZ = 0;
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * 更新
 */
void CPlayer::Update(void){
<<<<<<< HEAD
=======
	//回転方向
	float Roll = 0;
	//キーボードでの移動
	if (g_pInput->IsKeyHold(MOFKEY_LEFT))
	{
		m_Pos.x = max(m_Pos.x - PLAYER_SPEED, -FIELD_HALF_X);
		Roll -= MOF_MATH_PI;
	}
	if (g_pInput->IsKeyHold(MOFKEY_RIGHT))
	{
		m_Pos.x = min(m_Pos.x + PLAYER_SPEED, FIELD_HALF_X);
		Roll -= MOF_MATH_PI;
	}
	if (g_pInput->IsKeyHold(MOFKEY_UP))
	{
		m_Pos.z = min(m_Pos.z + PLAYER_SPEED, FIELD_HALF_Z);
	}
	if (g_pInput->IsKeyHold(MOFKEY_DOWN))
	{
		m_Pos.z = max(m_Pos.z - PLAYER_SPEED, -FIELD_HALF_Z);
	}
	//回転
	float RotSpeed = MOF_ToRadian(10);
	if (Roll == 0)
	{
		RotSpeed = min(abs(m_RotZ) * 0.1f, RotSpeed);
	}
	if (abs(m_RotZ) <= RotSpeed || signbit(m_RotZ) != signbit(Roll))
	{
		m_RotZ += Roll;
	}
	m_RotZ -= copysignf(min(RotSpeed, abs(m_RotZ)), m_RotZ);
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * 描画
 */
void CPlayer::Render(void){
<<<<<<< HEAD
=======
	//ワールド行列作成
	CMatrix44 matworld;
	matworld.RotationZ(m_RotZ);			//回転行列を求める
	matworld.SetTranslation(m_Pos);		//作成した回転行列の移動成分に座標をセット
	//メッシュの描画
	m_Mesh.Render(matworld);
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * デバッグ文字描画
 */
void CPlayer::RenderDebugText(void){
	// 位置の描画
	CGraphicsUtilities::RenderString(10,40,MOF_XRGB(0,0,0),
			"プレイヤー位置 X : %.1f , Y : %.1f , Z : %.1f",m_Pos.x,m_Pos.y,m_Pos.z);
}

/**
 * 解放
 */
void CPlayer::Release(void){
<<<<<<< HEAD
=======
	m_Mesh.Release();
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}