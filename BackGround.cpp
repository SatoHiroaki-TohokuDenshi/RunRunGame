#include "BackGround.h"

BackGround::BackGround()
	:BackGround_{ U"Images/Field.png", TextureDesc::Mipped },
	BGM_{ U"Audio/ウルトラ大掃除.mp3" }
{
}

void BackGround::Update() {

}

void BackGround::Draw() {
	BackGround_.draw(0, 0);
}
