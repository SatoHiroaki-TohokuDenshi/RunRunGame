# pragma once
# include "SceneBase.h"

// タイトルシーン
class Score : public App::Scene
{
public:

	Score(const InitData& init);

	void update() override;

	void draw() const override;

private:
	const Texture RankSS_;
	const Texture RankS_;
	const Texture RankA_;
	const Texture RankB_;
	const Texture RankC_;
	const Texture RankD_;
	const Vec2 RankPos_;
	const Vec2 EvaluationPos_;

	const Audio RankUpper_;
	const Audio RankMiddle_;
	const Audio RankLower_;

	int PlayScore_;

	Rect m_titleButton{ Arg::center = Scene::Center().movedBy(0, 200), 300, 60 };
	Transition m_startTransition{ 0.4s, 0.2s };
};
