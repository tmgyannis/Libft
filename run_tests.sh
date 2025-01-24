#!/bin/bash

# Chemin du dossier contenant vos fichiers .c
SRC_DIR="./src"

# Dossier temporaire pour les exécutables compilés
BUILD_DIR="./build"

# Création du dossier build s'il n'existe pas
mkdir -p "$BUILD_DIR"

# Nettoyage du terminal
clear

echo "================= TESTS DE VOS FONCTIONS ================="
echo ""

# Boucle à travers tous les fichiers .c dans le dossier src
for file in "$SRC_DIR"/*.c; do
    # Récupère le nom du fichier sans extension
    base_name=$(basename "$file" .c)

    # Nom de l'exécutable
    executable="$BUILD_DIR/$base_name"

    echo "----------------------------------------"
    echo "Compilation de : $base_name.c"
    echo "----------------------------------------"

    # Compile le fichier C
    if gcc "$file" -o "$executable"; then
        echo "✅ Compilation réussie : $base_name.c"
        echo "----------------------------------------"
        echo "Exécution de : $base_name"
        echo "----------------------------------------"

        # Exécute l'exécutable
        "$executable"

        echo ""
        echo "----------------------------------------"
        echo "Fin du test pour : $base_name.c"
        echo ""
    else
        echo "❌ Erreur de compilation pour : $base_name.c"
        echo ""
    fi
done

echo "================= FIN DES TESTS ================="
