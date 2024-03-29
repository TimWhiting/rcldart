#ifndef _H_2B396F74D8C94695C1D31A6150E879EF_ListParametersResult_DCPS_H_
#define _H_2B396F74D8C94695C1D31A6150E879EF_ListParametersResult_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ListParametersResult_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class ListParametersResult_TypeSupportInterface;

            typedef ListParametersResult_TypeSupportInterface * ListParametersResult_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ListParametersResult_TypeSupportInterface> ListParametersResult_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ListParametersResult_TypeSupportInterface> ListParametersResult_TypeSupportInterface_out;


            class ListParametersResult_DataWriter;

            typedef ListParametersResult_DataWriter * ListParametersResult_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ListParametersResult_DataWriter> ListParametersResult_DataWriter_var;
            typedef DDS_DCPSInterface_out < ListParametersResult_DataWriter> ListParametersResult_DataWriter_out;


            class ListParametersResult_DataReader;

            typedef ListParametersResult_DataReader * ListParametersResult_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ListParametersResult_DataReader> ListParametersResult_DataReader_var;
            typedef DDS_DCPSInterface_out < ListParametersResult_DataReader> ListParametersResult_DataReader_out;


            class ListParametersResult_DataReaderView;

            typedef ListParametersResult_DataReaderView * ListParametersResult_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ListParametersResult_DataReaderView> ListParametersResult_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ListParametersResult_DataReaderView> ListParametersResult_DataReaderView_out;

            struct ListParametersResult_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ListParametersResult_, struct ListParametersResult_Seq_uniq_> ListParametersResult_Seq;
            typedef DDS_DCPSSequence_var < ListParametersResult_Seq> ListParametersResult_Seq_var;
            typedef DDS_DCPSSequence_out < ListParametersResult_Seq> ListParametersResult_Seq_out;

            class  ListParametersResult_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ListParametersResult_TypeSupportInterface_ptr _ptr_type;
                typedef ListParametersResult_TypeSupportInterface_var _var_type;

                static ListParametersResult_TypeSupportInterface_ptr _duplicate (ListParametersResult_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParametersResult_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ListParametersResult_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParametersResult_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParametersResult_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ListParametersResult_TypeSupportInterface () {};
                ~ListParametersResult_TypeSupportInterface () {};
            private:
                ListParametersResult_TypeSupportInterface (const ListParametersResult_TypeSupportInterface &);
                ListParametersResult_TypeSupportInterface & operator = (const ListParametersResult_TypeSupportInterface &);
            };

            class  ListParametersResult_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ListParametersResult_DataWriter_ptr _ptr_type;
                typedef ListParametersResult_DataWriter_var _var_type;

                static ListParametersResult_DataWriter_ptr _duplicate (ListParametersResult_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParametersResult_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParametersResult_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ListParametersResult_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ListParametersResult_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ListParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ListParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ListParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ListParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ListParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ListParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ListParametersResult_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ListParametersResult_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ListParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParametersResult_& instance_data) = 0;

            protected:
                ListParametersResult_DataWriter () {};
                ~ListParametersResult_DataWriter () {};
            private:
                ListParametersResult_DataWriter (const ListParametersResult_DataWriter &);
                ListParametersResult_DataWriter & operator = (const ListParametersResult_DataWriter &);
            };

            class  ListParametersResult_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ListParametersResult_DataReader_ptr _ptr_type;
                typedef ListParametersResult_DataReader_var _var_type;

                static ListParametersResult_DataReader_ptr _duplicate (ListParametersResult_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParametersResult_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParametersResult_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParametersResult_& instance) = 0;

            protected:
                ListParametersResult_DataReader () {};
                ~ListParametersResult_DataReader () {};
            private:
                ListParametersResult_DataReader (const ListParametersResult_DataReader &);
                ListParametersResult_DataReader & operator = (const ListParametersResult_DataReader &);
            };

            class  ListParametersResult_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ListParametersResult_DataReaderView_ptr _ptr_type;
                typedef ListParametersResult_DataReaderView_var _var_type;

                static ListParametersResult_DataReaderView_ptr _duplicate (ListParametersResult_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParametersResult_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParametersResult_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParametersResult_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParametersResult_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParametersResult_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParametersResult_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParametersResult_& instance) = 0;

            protected:
                ListParametersResult_DataReaderView () {};
                ~ListParametersResult_DataReaderView () {};
            private:
                ListParametersResult_DataReaderView (const ListParametersResult_DataReaderView &);
                ListParametersResult_DataReaderView & operator = (const ListParametersResult_DataReaderView &);
            };
        }

    }

}

#endif
