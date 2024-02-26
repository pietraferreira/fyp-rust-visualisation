#!/bin/bash
mkdir -p logs

# generate a timestamp for the log filename
timestamp=$(date +"%Y-%m-%d_%H-%M-%S")
logFile="logs/log_$timestamp.txt"

node unified-testing-ai-treesitterv4-wip.js | tee "$logFile" 

echo "Tests completed. Output logged to $logFile"
