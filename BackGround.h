#pragma once
class BackGround
{
private:
	/// @brief 背景画像
	const Texture BackGround_;
	/// @brief BGM
	const Audio BGM_;
public:
	BackGround();
	void Update();
	void Draw();
};
