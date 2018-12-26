Naziv slučaja upotrebe   | Prijava na sistem 
----------------------   | -----------------
**Glavni Učesnik**       | Registrovani korisnik 
**Sporedni učesnici**    | Sistem
**Kratak opis**          | Prijava registrovanog korisnika na sistem pomoću jedinstvenih kredencijala.
**Preduslovi**           | Korisnik je registrovan u sistem.
**Postuslovi**           | Korisnik je prijavljen na sistem.
**Koraci (osnovni tok)** | <ol> <li> Registrovani korisnik započinje proces prijave na sistem klikom na dugme "prijavi se". <li> Sistem generiše i prikazuje formu za prijavu.  <li> Registrovani korisnik unosi korisničko ime. <li> Registrovani korisnik unosi lozinku. <li> Sistem provjerava validnost unesenih kredencijala. <li> Sistem dodjeljuje dozvoljene privilegije registrovanom korisniku.
**Alternative** | 5.a Sistem obavještava korisnika o neuspješnoj prijavi i zahtijeva ponovno unošenje kredencijala.  



Naziv slučaja upotrebe   | Odjava sa sistema 
----------------------   | -----------------
**Glavni Učesnik**       | Registrovani korisnik 
**Sporedni učesnici**    | Sistem
**Kratak opis**          | Odjava korisnika sa sistema.
**Preduslovi**           | Korisnik je prijavljen na sistem.
**Postuslovi**           | Korisnik je odjavljen sa sistema.
**Koraci (osnovni tok)** | <ol> <li> Prijavljeni korisnik započinje proces odjave sa sistema klikom na dugme "odjavi se". <li> Sistem generiše formu za odjavu i prikazuje je registrovanom korisniku. <li> Korisnik potvrđuje odjavu sa sistema. <li> Sistem odjavljuje korisnika sa sistema. 
**Alternative** | 3.a Korisnik odustaje od odjave sa sistema.

Naziv slučaja upotrebe   | Rezervacija karte 
----------------------   | -----------------
**Glavni Učesnik**       | Registrovani korisnik 
**Sporedni učesnici**    | Sistem
**Kratak opis**          | Korisnik nakon prijave na sistem, pregleda događaja i odabira željenog događaja rezerviše karte.
**Preduslovi**           | Korisnik je prijavljen na sistem i odabrao je željeni događaj.
**Postuslovi**           | Korisnik je reservisao željene karte i primio je obavještenje putem e-mail.
**Koraci (osnovni tok)** | <ol> <li> Prijavljeni korisnik započinje proces rezervacije karata klikom na dugme "rezerviši kartu". <li> Sistem generiše i prikazuje formu za rezervisanje karte <li> Korisnik popunjava formu za rezervisanje pri čemu bira broj karata za rezervaciju. <li> Sistem obrađuje primljene podatke. <li> Sistem obavještava korisnika o uspješnoj rezervaciji putem e-maila
**Alternative** | <ul style="list-style-type:none"> <li> 3.a Korisnik odustaje od rezervacije karte. <li>5.a Sistem obavještava korisnika o neuspješnoj rezervaciji

Naziv slučaja upotrebe   | Rezervacija karte 
----------------------   | -----------------
**Glavni Učesnik**       | Registrovani korisnik 
**Sporedni učesnici**    | Sistem
**Kratak opis**          | Korisnik nakon prijave na sistem, pregleda događaja i odabira željenog događaja rezerviše karte.
**Preduslovi**           | Korisnik je prijavljen na sistem i odabrao je željeni događaj.
**Postuslovi**           | Korisnik je reservisao željene karte i primio je obavještenje putem e-mail.
**Koraci (osnovni tok)** | <ol> <li> Prijavljeni korisnik započinje proces rezervacije karata klikom na dugme "rezerviši kartu". <li> Sistem generiše i prikazuje formu za rezervisanje karte <li> Korisnik popunjava formu za rezervisanje pri čemu bira broj karata za rezervaciju. <li> Sistem obrađuje primljene podatke. <li> Sistem obavještava korisnika o uspješnoj rezervaciji putem e-maila
**Alternative** | <ul style="list-style-type:none"> <li> 3.a Korisnik odustaje od rezervacije karte. <li>5.a Sistem obavještava korisnika o neuspješnoj rezervaciji


Naziv slučaja upotrebe   | Biranje mjesta u sali 
----------------------   | -----------------
**Glavni Učesnik**       | Registrovani korisnik 
**Sporedni učesnici**    | Sistem
**Kratak opis**          | Korisnik bira željeno mjesto u sali za rezervaciju.
**Preduslovi**           | Korisnik ima status "zlatnog" korisnika, prijavljen je na sistem, odabrao je događaj i odabrao broj mjesta za rezervaciju.
**Postuslovi**           | Korisnik je rezervisao željena mjesta.
**Koraci (osnovni tok)** | <ol> <li> Nakon odabira broja karata za rezervisanje sistem generiše formu za upit korisnika o želji za biranjem mjesta u sali. <li> Korisnik potvrđuje upit. <li>Sistem prikazuje sliku sale sa naznačenim mjestima koja je moguće rezervisati <li> Korisnik bira mjesta u sali klikom na oznake mjesta, označene rednim brojevima. <li> Sistem obrađuje podatke i upisuje u bazu. <li> Sistem obavještava korisnika o uspješnoj rezervaciji. 
**Alternative** | <ul style="list-style-type:none"> <li> 2.a Korisnik odbija upit za biranje mjesta, sistem automatski bira mjesta za rezervisanje. 

