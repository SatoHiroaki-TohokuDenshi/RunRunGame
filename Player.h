#pragma once
class Player
{
private:
	/// @brief プレイヤーキャラの画像
	const Texture PlayerChar_;
	/// @brief プレイヤーの座標
	Vec2 PlayerPos_;

	//ジャンプしているかどうか
	bool IsPlayerJumpping;
	/// @brief 重力加速度
	const double GA_;
	/// @brief ジャンプの移動量
	double Move_;
	/// @brief ジャンプの効果音
	const Audio JumpSE_;
public:
	Player();
	~Player();
	/// @brief 処理を行う関数
	void Update();
	/// @brief 描画を行う関数
	void Draw();
	/// @brief ジャンプ処理を行う関数
	void JumpUp();

};

