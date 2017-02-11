USE db_glarivie;
SELECT UCASE(fiche_personne.nom) AS 'NOM', prenom, prix FROM fiche_personne, abonnement, membre WHERE fiche_personne.id_perso = membre.id_fiche_perso && abonnement.prix > 42 && abonnement.id_abo = membre.id_abo ORDER BY fiche_personne.nom, fiche_personne.prenom;
