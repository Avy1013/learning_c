#!/bin/bash

# Directory containing your files
source_directory="/Users/avy/Documents/c pro/learning_c"

# Directory to move executables without extensions
destination_directory="/Users/avy/Documents/c pro/learning_c/testing"

# Move executables without extensions
cd "$source_directory" || exit

for file in *; do
    # Check if the file doesn't have an extension
    if [ -f "$file" ] && [ "${file%.*}" = "$file" ]; then
        # Move the file to the destination directory
        mv "$file" "$destination_directory"
    fi
done

echo "Execution complete."
