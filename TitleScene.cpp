# include "TitleScene.h"

Title::Title(const InitData& init)
	: IScene{ init } {}

void Title::update()
{
	m_startTransition.update(m_startButton.mouseOver());

	if (m_startButton.mouseOver())
	{
		Cursor::RequestStyle(CursorStyle::Hand);
	}

	if (m_startButton.leftClicked())
	{
		// ゲームシーンへ
		getData().score = 0;
		getData().RankSE = true;
		getData().fullRun = false;
		changeScene(State::Play);

	}
}

void Title::draw() const
{
	Scene::SetBackground(ColorF{ 0.2, 0.8, 0.4 });
	m_startButton.draw(ColorF{ 1.0, m_startTransition.value() }).drawFrame(2);

	FontAsset(U"TitleFont")(U"RunGame")
		.drawAt(TextStyle::OutlineShadow(0.2, ColorF{ 0.2, 0.6, 0.2 }, Vec2{ 3, 3 }, ColorF{ 0.0, 0.5 }), 100, Vec2{ 400, 100 });

	FontAsset(U"Menu")(U"PLAY").drawAt(m_startButton.center(), ColorF{ 0.25 });
}
