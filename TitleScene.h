# pragma once
# include "SceneBase.h"

// タイトルシーン
class Title : public App::Scene
{
public:

	Title(const InitData& init);
	/// @brief 処理を行う関数
	void update() override;
	/// @brief 描画を行う関数
	void draw() const override;

private:
	/// @brief スタートボタンの枠
	Rect m_startButton{ Arg::center = Scene::Center(), 300, 60 };
	/// @brief マウスカーソルの変化
	Transition m_startTransition{ 0.4s, 0.2s };
};
