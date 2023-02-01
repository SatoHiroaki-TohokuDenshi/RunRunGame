#include "SceneBase.h"
# include "TitleScene.h"
# include "PlayScene.h"
# include "ScoreScene.h"

void Main()
{
	FontAsset::Register(U"TitleFont", FontMethod::MSDF, 50, U"example/font/RocknRoll/RocknRollOne-Regular.ttf");
	FontAsset(U"TitleFont").setBufferThickness(4);
	FontAsset::Register(U"Menu", FontMethod::MSDF, 40, Typeface::Medium);
	FontAsset::Register(U"ScoreScene", 40, Typeface::Heavy);
	FontAsset::Register(U"GameScore", 30, Typeface::Light);
	AudioAsset::Register(U"Brick", GMInstrument::Woodblock, PianoKey::C5, 0.2s, 0.1s);

	App manager;
	manager.add<Title>(State::Title);
	manager.add<Play>(State::Play);
	manager.add<Score>(State::Score);

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}

