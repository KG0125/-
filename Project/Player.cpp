#include "Player.h"

/**
 * �R���X�g���N�^
 */
CPlayer::CPlayer() :
m_Mesh(),
m_Pos(0.0f,0.0f,0.0f),
m_RotZ(0.0f){
}

/**
 * �f�X�g���N�^
 */
CPlayer::~CPlayer(){
}

/**
 * �ǂݍ���
 */
bool CPlayer::Load(void){
	// ���b�V���̓ǂݍ���
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
 * ������
 */
void CPlayer::Initialize(void){
<<<<<<< HEAD
=======
	m_Pos = Vector3(0.0f, 0.0f, -FIELD_HALF_Z + 2.0f);
	m_RotZ = 0;
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * �X�V
 */
void CPlayer::Update(void){
<<<<<<< HEAD
=======
	//��]����
	float Roll = 0;
	//�L�[�{�[�h�ł̈ړ�
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
	//��]
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
 * �`��
 */
void CPlayer::Render(void){
<<<<<<< HEAD
=======
	//���[���h�s��쐬
	CMatrix44 matworld;
	matworld.RotationZ(m_RotZ);			//��]�s������߂�
	matworld.SetTranslation(m_Pos);		//�쐬������]�s��̈ړ������ɍ��W���Z�b�g
	//���b�V���̕`��
	m_Mesh.Render(matworld);
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}

/**
 * �f�o�b�O�����`��
 */
void CPlayer::RenderDebugText(void){
	// �ʒu�̕`��
	CGraphicsUtilities::RenderString(10,40,MOF_XRGB(0,0,0),
			"�v���C���[�ʒu X : %.1f , Y : %.1f , Z : %.1f",m_Pos.x,m_Pos.y,m_Pos.z);
}

/**
 * ���
 */
void CPlayer::Release(void){
<<<<<<< HEAD
=======
	m_Mesh.Release();
>>>>>>> 530b6e03f10437cf53212a246e9ca455a6e7eb90
}