#include <iostream>
#include <cstring>
#include <array>
using namespace std;
const int M = 3;

struct Record {
	array<char,22> track_id;
	array<char,123> track_name;
	array<char,51> track_artist;
	array<char,28000> lyrics;
	double track_popularity;
	array<char,22> track_album_id;
	array<char,151> track_album_name;
	array<char,10> track_album_release_date;
	array<char,120> playlist_name;
	array<char,22> playlist_id;
	array<char,5> playlist_genre;
	array<char,25> playlist_subgenre;
	double danceability;
	double energy;
	double key;
	double loudness;
	double mode;
	double speechiness;
	double acousticness;
	double instrumentalness;
	double liveness;
	double valence;
	double tempo;
	double duration_ms;
	array<char,3> language;
};

