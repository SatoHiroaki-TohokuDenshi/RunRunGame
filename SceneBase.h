# pragma once
# include <Siv3D.hpp>

// シーンの名前
enum class State
{
	Title,
	Play,
	Score
};

// 共有するデータ
struct GameData
{
	int  playScore;
	bool IsFullRun;
	bool RankSE;
};

using App = SceneManager<State, GameData>;
