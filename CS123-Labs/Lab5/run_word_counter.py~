from mrjob.examples.mr_word_freq_count import MRWordFreqCount
import sys

if __name__ == '__main__':
    # Creates an instance of our MRJob subclass
    job = MRWordFreqCount(args=sys.argv[1:])
    with job.make_runner() as runner:
        # Run the job
        runner.run()

        # Process the output
        for line in runner.stream_output():
            key, value = job.parse_output_line(line)
            print 'key:', key, 'value:', value
