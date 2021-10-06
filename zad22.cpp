public class Uczen() {
	public string imie;

	public string nazwisko;

	public string klasa;

	public int rok_ur;

	public ustawImie(string imieUcznia) {
		imie = imieUcznia;
	}

	public ustawNazwisko(string nazwiskoUcznia) {
		nazwisko = nazwiskoUcznia;
	}

	public ustawKlase(string klasaUcznia) {
		klasa = klasaUcznia;
	}

	public ustawRokUr(int rok_urUcznia) {
		rok_ur = rok_urUcznia;
	}

	public int ktoStarszy(int rok1, int rok2) {
		if (rok1 > rok2)
		{
			return rok1;
		}
		else return rok2;
	}
}

public class Program() {
	Uczen uczen_a = new Uczen();

	Uczen uczen_b = new Uczen();

	uczen_a.rok_ur = 2003;

	uczen_a.rok_ur = 2004

	int starszyUczen = ktoStarszy(uczen_a.rok_ur, uczen_b.rok_ur);
}



