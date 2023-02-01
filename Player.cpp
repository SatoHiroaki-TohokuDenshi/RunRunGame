#include "Player.h"

Player::Player()
	:PlayerChar_{ U"Images/Man_Run1.png", TextureDesc::Mipped }, PlayerPos_(0, 0),
	IsPlayerJumpping(false), GA_(0.5), Move_(0), JumpSE_{U"Audio/レトロジャンプ.mp3"}
{
}

Player::~Player()
{
}

void Player::JumpUp() {
	if (PlayerPos_.y == 350) {
		Move_ = -17;
		PlayerPos_.y += Move_;
		JumpSE_.play();
	}
}

void Player::Update() {
	if (PlayerPos_.y < 350) {
	PlayerPos_.y += Move_;
	Move_ += GA_;
	}

	if (PlayerPos_.y > 350)
	{
		Move_ = 0;
		PlayerPos_.y = 350;
	}
}

void Player::Draw() {
	PlayerChar_.scaled(0.3).draw(PlayerPos_);
}
