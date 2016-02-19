# fastq_filter
Tool to Filter FastQ-Formatted Reads by Length

### Building

1. Clone Repository
2. Run `make`

### Usage

`./filter <minimum length> <maximum length>`

Pipes STDIN to STDOUT, accepting only reads from [min, max)
